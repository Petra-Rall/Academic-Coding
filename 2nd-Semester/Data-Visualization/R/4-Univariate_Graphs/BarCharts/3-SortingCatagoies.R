# calculate number of participants in each race category
library(dplyr)
plotdata <-Marriage %>% count(race)

# plot the bars in ascending order
# The option stat="identity" tells the plotting function not to 
# calculate counts,because they are supplied directly.
ggplot(plotdata, aes(x=reorder(race,n), y = n))+
  geom_bar(stat="identity")+
  labs(x="Race", y="plotdataFrequency", title="Participants by race")
      
