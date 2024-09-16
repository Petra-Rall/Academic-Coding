df <- data.frame(
  dob = c("11/10/1963", "Jan-23-91", "12:1:2001")
)

# view struction of data frame
str(df)


library(lubridate)
# convert dob from character to date:

# The expression df$dob in R is used 
#to access the dob column of the data frame df
df$dob <- mdy(df$dob)
str(df)