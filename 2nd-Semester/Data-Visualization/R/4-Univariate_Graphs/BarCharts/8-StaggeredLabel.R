# bar chart with staggered labels
lbls <- paste0(c("","\n"), levels(Marriage$officialTitle))

ggplot(Marriage, aes(x=factor(officialTitle,
                               labels=lbls)))+
  geom_bar()+
labs(x="",
     y="Frequency",
     title="Marriage by officiate")
