## Text Files:
setwd("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\R\\2.1-Importing-Data")
library(readr)
# import data from a comma delimited file
Salaries <- read_csv("Salaries.csv")

# import data from a tab delimited file
Salaries <- read_tsv("Salaries.txt")

## Excel Spreadsheets:

library(readxl)
# import data from an Excel workbook
Salaries <- read_excel("Salaries.xlsx", sheet = 1)

## Statistical Packages:

library(haven)
# import data from Stata 
Salaries <- read_dta("Salaries.dta") 
# import data from SPSS 
Salaries <- read_sav("Salaries.sav") 
# import data from SAS 
Salaries <- read_sas("Salaries.sas7bdat")
