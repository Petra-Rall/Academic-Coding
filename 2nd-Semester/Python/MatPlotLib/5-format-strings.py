import matplotlib.pyplot as plt
import numpy as np

ypoints = np.array([3,8,1,10])

plt.plot(ypoints, 'o:r') #line: '-',':','--','-.', can be left blank
                         #color: r,g,b,c,m,y,k,w
plt.show()

#You can also use the shortcut string notation parameter to specify the marker.
#This parameter is also called fmt, and is written with this syntax:
#marker|line|color