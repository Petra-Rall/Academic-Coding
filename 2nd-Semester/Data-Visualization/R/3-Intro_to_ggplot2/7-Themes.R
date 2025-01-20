# use a minimalist theme
library(ggplot2)
ggplot(data=insurance, mapping=aes(x=age, y=expenses, color=smoker))+
  geom_point(alpha=0.5)+
  geom_smooth(method="lm", se=FALSE)+
  scale_x_continuous(breaks=seq(0,70,10))+
  scale_y_continuous(breaks=seq(0,60000,20000), label = scales::dollar)+
  scale_color_manual(values=c("indianred3", "cornflowerblue"))+
  facet_wrap(~obese)+
  labs(title="Relationship between patient demographics and medical costs",
       subtitle="US Census Bureau 2013",
       caption="source: http://mosaic-web.org/",
       x="Age(years)",
       y="Annual expenses", 
       color = "Smokers?")+
  theme_minimal()
