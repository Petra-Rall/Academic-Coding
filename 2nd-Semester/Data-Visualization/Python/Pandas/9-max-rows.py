import pandas as pd

print(pd.options.display.max_rows)

'''In my system the number is 60, which means that if the DataFrame contains more than 60 rows, the print(df) statement will return only the headers and the first and last 5 rows.'''