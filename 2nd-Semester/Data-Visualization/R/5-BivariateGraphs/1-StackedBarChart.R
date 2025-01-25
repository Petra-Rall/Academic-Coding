library(ggplot2)
#stacked bar chart
ggplot(mpg,aes(x=class, fill=drv))+
  geom_bar(position="stack")