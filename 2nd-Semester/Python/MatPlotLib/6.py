import matplotlib.pyplot as plt
import numpy as np

ypoints = np.array([3,8,1,10])

#You can also use Hexadecimal color values
#Or any of the 140 supported color names

plt.plot(ypoints, marker = 'o', ms = 20, mec = 'hotpink', mfc= '#4CAF50') #mec=marker edge color, mfc= marker face color
plt.show()