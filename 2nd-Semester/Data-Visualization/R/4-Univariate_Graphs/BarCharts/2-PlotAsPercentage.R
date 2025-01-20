# plot the distribution as percentages
library(ggplot2)
ggplot(Marriage, aes(x=race, y=after_stat(count/sum(count))))+
  geom_bar()+
  labs(x = "Race", y = "Percent", title = "Participants by race") +
  scale_y_continuous(labels=scales::percent)
