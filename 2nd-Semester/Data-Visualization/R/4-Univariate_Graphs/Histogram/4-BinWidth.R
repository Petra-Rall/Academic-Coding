library(ggplot2)
data(Marriage,package="mosaicData")

# plot the histogram with a binwidth of 5

ggplot(Marriage,aes(x=age))+
  geom_histogram(fill="cornflowerblue",
                 color="white",
                 binwidth=5)+
  labs(title="Participants by age",
       x="Age")
