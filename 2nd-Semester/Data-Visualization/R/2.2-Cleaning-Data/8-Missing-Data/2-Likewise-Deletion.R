# Create a dataset containing genus, vore, and conservation. 
# Delete any rows containing missing data.
library(dplyr)
newdata <- select(msleep, genus, vore, conservation)
newdata <- na.omit(newdata)