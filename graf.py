import numpy as np
import matplotlib.pyplot as plt


datos=np.loadtxt("datos.txt")
N=int(1/0.0025)
#x=np.linspace(0,1,N)


ui=datos[0:N-1]
u1=datos[N:2*N-1]
plt.plot(ui,label="inicial")
plt.plot(u1,label="0.5")
##plt.plot(x,u2,label="-0.5")
##plt.plot(x,u3,label="-1")
plt.legend()
plt.savefig("grafica.png")
print(np.where(ui==1))
