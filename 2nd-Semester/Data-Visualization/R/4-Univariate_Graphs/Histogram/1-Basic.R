library(ggplot2)
data(Marriage,package="mosaicData")
# plot the age distribution using a histogram

ggplot(Marriage,aes(x=age))+
  geom_histogram()+
  labs(title="Participants by age",
       x="Age")