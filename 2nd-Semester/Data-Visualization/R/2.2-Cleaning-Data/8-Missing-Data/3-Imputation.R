# Impute missing values using the 5 nearest neighbors
library(VIM)
newdata <- kNN(msleep, k=5)