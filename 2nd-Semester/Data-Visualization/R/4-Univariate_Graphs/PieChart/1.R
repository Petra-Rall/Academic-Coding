library(dplyr)
plotdata <- Marriage
race <- plotdata$race
count <- Marriage %>% count(race)
count <- count$n
percentage <- round(count/sum(count)*100,1)
colors <- c("#4394E5", "#87BB62", "#F5921B", "#876FD4")
pie(count, 
    labels=paste(race,"-", percentage,"%"),
    col=colors,border="black", 
    family="serif",
    col.main = "#3D3838",
    main="Pie Chart", 
    radius = 1.2,
    cex=0.7)
