import pandas as pd
import oracledb
from datetime import datetime, date

def parse_date(value):
    if not value or str(value).strip().lower() in ['na', 'n/a', 'none', '']:
        return None
    if isinstance(value, (datetime, date)):
        return value.date()
    for fmt in ("%d/%m/%Y"):
        try:
            return datetime.strptime(value.strip(), fmt).date()
        except:
            continue
    return None

# Load Excel and clean column names
df = pd.read_excel("sampleInformation.xlsx")
df.columns = [col.strip() for col in df.columns]

# Connect to Oracle
conn = oracledb.connect(user="drug_schema", password="annoying", dsn="localhost:1521/FREEPDB1")
cursor = conn.cursor()

# Insert rows
for _, row in df.iterrows():
    try:
        vals = []
        for col in df.columns:
            val = row[col]
            if pd.isnull(val) or str(val).strip().lower() in ('', 'na', 'n/a', 'none'):
                val = None
            if col in ('clinical_trial_start_date', 'clinical_trial_completion_date'):
                val = parse_date(val)
            vals.append(val)

        cursor.execute("""
            INSERT INTO DrugFullInfo (
                drug_name,
                side_effect1, side_effect2, side_effect3, side_effect4, side_effect5,
                interacts_with1, interacts_with2, interacts_with3,
                disease_name, disease_category,
                drug_category,
                product_name, company_name,
                clinical_trial_title,
                clinical_trial_start_date,
                clinical_trial_completion_date,
                clinical_trial_participants,
                clinical_trial_status,
                clinical_trial_condition1, clinical_trial_condition2, clinical_trial_address1, 
                clinical_trial_institution, clinical_trial_address2, clinical_trial_main_researcher,
                clinical_trial_condition3
            ) VALUES (
                :1,:2,:3,:4,:5,:6,
                :7,:8,:9,
                :10,:11,
                :12,
                :13,:14,
                :15,:16,:17,
                :18,
                :19,
                :20,:21,:22,
                :23,:24,:25,
                :26
            )
        """, vals)

    except oracledb.DatabaseError as e:
        drug_name = row.get('drug_name', 'UNKNOWN')
        print(f"Insert error for drug '{drug_name}': {e}")

# Finalize
conn.commit()
cursor.close()
conn.close()
