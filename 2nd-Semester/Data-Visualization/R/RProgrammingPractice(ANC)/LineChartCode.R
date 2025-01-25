library(readxl)
library(dplyr)

Mydata <- read_excel("D:/Downloads/RProgrammingPractice/RProgrammingPractice/ColumnBarData.xlsx", sheet=1)

cats <-Mydata$Years
values <- Mydata$Sales

plot(values, type="l", col = "red", lwd=2)



 
