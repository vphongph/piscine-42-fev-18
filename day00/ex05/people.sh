ldapsearch -LLL uid="z*" | grep "^cn:" | sort -fr  | sed "s/cn: //"
