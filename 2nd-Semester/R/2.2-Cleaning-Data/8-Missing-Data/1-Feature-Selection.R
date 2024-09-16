#In feature selection, you delete variables (columns) that contain too many missing values.

data(msleep, package = "ggplot2")

# what is the proportion of missing data for each variable?
pctmiss <- colSums(is.na(msleep)/nrow(msleep))
round(pctmiss,2)

#Sixty-two percent of the sleep_cycle values are missing. You may decide to drop it.