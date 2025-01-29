library(readxl)
library(ggplot2)

plotdata <- read_excel("D:/Academic-Coding/2nd-Semester/Data-Visualization/R/LabFinalData.xlsx")

x <- plotdata$`Marketing Spend ($)`
y <- plotdata$`Revenue ($)`
z <- plotdata$`Market Share (%)` / 100

ggplot(plotdata, aes(x = x, y = y, size = z)) + 
  geom_point(alpha=0.5, fill="cornflowerblue", color="black",
             shape=21)+
  scale_x_continuous(breaks=seq(100,1600, 100), label = scales::dollar)+
  scale_y_continuous(breaks=seq(1000,8000,1000), label = scales::dollar)+
  scale_size_continuous(range = c(1, 10),
                        label = scales::percent) + 
  labs(title = "Relationship Between Marketing Spend, Revenue and Market Share", 
       x = "Marketing Spend", 
       y = "Revenue", 
       size = "Market Share")