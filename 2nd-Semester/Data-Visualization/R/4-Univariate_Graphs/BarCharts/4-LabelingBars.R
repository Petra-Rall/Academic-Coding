# plot the bars with numeric labels
ggplot(plotdata, aes(x=race, y=n))+
  geom_bar(stat="identity")+
  geom_text(aes(label=n), vjust=-0.5)+
  labs(x="Race", y="Frequency", title="Participants by race")
  