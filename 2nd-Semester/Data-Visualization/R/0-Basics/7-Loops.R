#While:
i <- 1
while (i < 6) {
  print(i)
  i <- i + 1
} 

###############################
#Break:

i <- 1
while (i < 6) {
  print(i)
  i <- i + 1
  if (i == 4) {
    break
  }
} 

################################
#Next:
i <- 0
while (i < 6) {
  i <- i + 1
  if (i == 3) {
    next
  }
  print(i)
} 


##########################################

#For:
for (x in 1:10) {
  print(x)
} 

##########################################
fruits <- list("apple", "banana", "cherry")

for (x in fruits) {
  print(x)
}

##########################################
dice <- c(1, 2, 3, 4, 5, 6)

for (x in dice) {
  print(x)
} 