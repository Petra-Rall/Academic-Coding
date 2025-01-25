library(ggplot2)

ggplot(Marriage, aes(x=officialTitle))+
  geom_bar()+
  labs(x="Officiate",
       y="Frequency",
       title="Marriage by officiate")+
  coord_flip()
