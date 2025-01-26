library(ggplot2)
data(Marriage,package="mosaicData")

# plot the histogram with 20 bins
ggplot(Marriage,aes(x=age))+
  geom_histogram(fill="cornflowerblue",
                 color="white",
                 bins=20)+
  labs(title="Participants by age",
       x="Age")
