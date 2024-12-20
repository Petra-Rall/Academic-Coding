# Load necessary libraries and dataset
library(ggplot2)
data(Marriage, package = "mosaicData")

# Create the plot
p <- ggplot(Marriage, aes(x = race)) + 
  geom_bar(fill = "cornflowerblue", color = "black") +
  labs(x = "Race", y = "Frequency", title = "Participants by Race")

# Save the plot as a PDF file
ggsave("R-Plot.pdf", plot = p, width = 7, height = 5)
