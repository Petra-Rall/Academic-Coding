data(Salaries, package="carData")

library(dplyr)

plotdata <- Salaries %>%
  group_by(rank) %>%
  summarize(mean_salary=mean(salary))

ggplot(plotdata, aes(x=factor(rank,
                              labels = c("Assistant\nProfessor",
                                         "Associate\nProfessor", 
                                         "Full\nProfessor")),
                     y=mean_salary))+
  geom_bar(stat="identity",
           fill="cornflowerblue")+
  geom_text(aes(label=dollar(mean_salary)),
            vjust=-0.25)+
  scale_y_continuous(breaks = seq(0, 130000, 20000), 
                      label = scales::dollar)+
  labs(title = "Mean Salary by Rank", 
        subtitle = "9-month academic salary for 2008-2009", 
        x = "", 
        y = "")
  