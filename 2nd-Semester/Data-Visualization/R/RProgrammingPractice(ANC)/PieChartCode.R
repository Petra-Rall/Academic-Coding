library(readxl)
library(dplyr)

Mydata <- read_excel("D:/Academic-Coding/2nd-Semester/Data-Visualization/R/RProgrammingPractice(ANC)/PieData.xlsx", sheet=1)

cats <-Mydata$Category
values <- Mydata$UserNumber

percentages <- round(values / sum(values) * 100, 1) 

pie(values, labels = paste(cats,"-",percentages,"%"), main = "Pie Chart")


