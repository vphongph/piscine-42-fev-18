ldapsearch -LLLx  uid=$USER dn | sed "s/dn: //" | xargs
