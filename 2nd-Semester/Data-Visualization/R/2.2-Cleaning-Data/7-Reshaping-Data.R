# Create a wide dataset
wide_data <- data.frame(
  id = 1:3,
  Name = c("Bill","Bob", "Marry"),
  Sex = c("Male", "Male", "Female"),
  Height = c(70,72,62),
  Weight = c(180,195,130)
)

# convert wide dataset to long dataset

library(tidyr)
long_data <-pivot_longer(wide_data,
                         cols = c("Height", "Weight"),
                         names_to = "variable",
                         values_to = "value")

# convert long dataset to wide dataset
library(tidyr)
wide_data2 <- pivot_wider(long_data,
                         names_from = "variable",
                         values_from = "value")