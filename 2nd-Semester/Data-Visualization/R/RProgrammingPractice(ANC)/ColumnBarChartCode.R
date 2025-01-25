library(readxl)
library(dplyr)

Mydata <- read_excel("D:/Downloads/RProgrammingPractice/RProgrammingPractice/ColumnBarData.xlsx", sheet=1)

cats <-Mydata$Years
values <- Mydata$Sales

barplot(values,names.arg=cats,xlab="Sales",ylab="Year",col="blue",main="Sales Trend",border="red",horiz = TRUE)

