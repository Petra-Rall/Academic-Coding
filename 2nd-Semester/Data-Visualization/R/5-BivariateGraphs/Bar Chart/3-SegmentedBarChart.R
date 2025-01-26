library(ggplot2)

#bar plot,with each bar representing 100%

ggplot(mpg,aes(x=class,fill=drv))+
  geom_bar(position="fill")+
  labs(y="Proportion")
