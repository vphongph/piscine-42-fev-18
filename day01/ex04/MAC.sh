ifconfig | grep ether | sed "s/ether //" | cut -c2- | sed "s/ //"
