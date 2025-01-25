# bar chart with rotated labels
library(ggplot2)
ggplot(Marriage, aes(x=officialTitle)) + 
  geom_bar() + 
  labs(x = "", 
       y = "Frequency", 
       title = "Marriages by officiate") +
  theme(axis.text.x=element_text(angle=45,hjust=1))
