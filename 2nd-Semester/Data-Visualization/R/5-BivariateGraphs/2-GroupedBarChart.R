library(ggplot2)
 #grouped bar chart
ggplot(mpg,aes(x=class, fill=drv))+
  geom_bar(position="dodge")

# grouped bar plot preserving zero count bars 
ggplot(mpg, aes(x = class, fill = drv)) + 
  geom_bar(position = position_dodge(preserve = "single"))
