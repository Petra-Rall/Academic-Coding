# create a summary dataset
library(dplyr)
plotdata <- mpg %>%
  group_by(class,drv) %>%
  summarize(n=n()) %>%
  mutate(pct=n/sum(n), lbl = scales::percent(pct))
plotdata

# create segmentedbar chart 
# adding labels to each segment

ggplot(plotdata, aes(x=factor(class,
                              levels=c("2seater","subcompact", "compact","midsize", "minivan","suv","pickup")),
                     y=pct,
                     fill=factor(drv, 
                                 levels =c("f","r","4"), 
                                 labels =c("front-wheel", "rear-wheel", "4-wheel"))))+
  geom_bar(stat="identity",
           position="fill")+
  scale_y_continuous(breaks =seq(0,1,.2), 
                     label =percent)+
  geom_text(aes(label =lbl), 
            size =3, 
            position=position_stack(vjust=0.5))+ 
  scale_fill_brewer(palette ="Set2")+ 
  labs(y="Percent", 
       fill="Drive Train", 
       x="Class", 
       title="Automobile Driveby Class")+ 
  theme_minimal()
  