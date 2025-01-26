library(ggplot2)
data(Marriage,package="mosaicData")

# plot the histogram with percentages on the y-axis

library(scales)
ggplot(Marriage,
       aes(x=age,
           y= after_stat(count/sum(count))))+
  geom_histogram(fill="cornflowerblue",
                 color="white",
                 binwidth=5)+
  labs(title="Participants by age",
       y="Percent",
       x="Age")+
  scale_y_continuous(labels=percent)