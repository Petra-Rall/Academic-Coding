library(ggplot2)
data(Marriage,package="mosaicData")

# plot the histogram with blue bars and white borders

ggplot(Marriage,aes(x=age))+
  geom_histogram(fill="cornflowerblue",
                 color="white")+
  labs(title="Participants by age",
       x="Age")