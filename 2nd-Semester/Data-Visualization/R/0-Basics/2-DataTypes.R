#We can use the class() function to check 
#the data type of a variable:

# numeric
x <- 10.5
class(x)

# integer
x <- 1000L # where the letter "L" declares this as an integer
class(x)

# complex
x <- 9i + 3
class(x)

# character/string
x <- "R is exciting"
class(x)

# logical/boolean
x <- TRUE
class(x) 

################################################
#Numbers:
x <- 10.5   # numeric
y <- 10L    # integer
z <- 1i     # complex 

######################################################
#Type Conversion:
x<- 1L #int
y<-2 #numeric

a<- as.numeric(x)
b<-as.integer(y)

x
y

a
b

class(a)
class(b)
