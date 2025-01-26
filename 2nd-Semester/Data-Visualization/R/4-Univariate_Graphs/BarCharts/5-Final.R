library(dplyr)
library(ggplot2)
library(scales)
data(Marriage, package="mosaicData")
plotdata <- Marriage %>%
  count(race) %>%
  mutate(pct=n/sum(n),
         pctlabel = paste0(round(pct*100), "%"))

# plot the bars as percentages, 
# in decending order with bar labels 

# The minus sign in reorder(race,-pct) is used to order the bars 
# in descending order.
ggplot(plotdata, aes(x = reorder(race,-pct), y = pct)) + 
  geom_bar(stat="identity", fill="indianred3", color="black") + 
  geom_text(aes(label = pctlabel), vjust=-0.25) + 
  scale_y_continuous(labels = percent) + 
  labs(x = "Race", y = "Percent", title = "Participants by race")
