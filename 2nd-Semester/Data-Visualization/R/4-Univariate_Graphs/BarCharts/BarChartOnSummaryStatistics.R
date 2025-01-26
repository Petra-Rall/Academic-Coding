data(Salaries, package="carData")

#calculate mean salary for each rank

library(dplyr)

plotdata <- Salaries %>%
  group_by(rank) %>%
  summarize(mean_salary=mean(salary))

# plot mean salaries

ggplot(plotdata,aes(x=rank, y = mean_salary))+
  geom_bar(stat="identity")