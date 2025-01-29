library(ggplot2)
library(readr)


words <- c("Hello", "variable", "plots", "school", "Homework","Class", "Bright", "Cat", "songs", "movies")
frequency <- c(33,74,81,30,10,65,20,54,44,98)

plotdata2 <- data.frame(words, frequency)

ggplot(plotdata2,aes(x=words, y = frequency))+
  geom_bar(stat="identity")+
  scale_fill_brewer(palette="set3")

