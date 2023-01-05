d = {"Monk" : "Nun", "Wizard" : "Witch", "Bachelor" : "Spinster", "Prosecutor" : "Prosecutrix"}
def key_exist(x):
    if x in d:
        print("Key exist in dictionary")
    else:
        print("Key does not exist in dictionary")

key_exist("Bachelor")