import pandas as pd

data = {
    "calories": [420, 380, 390],
    "duration": [50, 40, 45]
}

df = pd.DataFrame(data)

#refer to the row index:
print(df.loc[0])

#Return row 0 and 1:
print(df.loc[[0,1]])