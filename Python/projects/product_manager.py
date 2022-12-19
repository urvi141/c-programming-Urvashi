
menu = """
               press 1 for product manager
               press 2 for customer
    
        """ 

product = {}


status = True
while status:
    print(menu)
    choice = int(input("Enter your choice : "))
    if choice == 1:
        spec = {}
        product_name = input("Enter your product : ")
        product_qty = int(input("Enter your qty : "))
        product_price = int(input("Enter your price : "))

        if product_name in product.keys():
            old_qty = product[product_name]['qty']

            spec['qty'] = old_qty + product_qty
            spec['price'] = product_price

            product[product_name] = spec
            print("-----> already exist", product)
        else:
            spec['qty'] = product_qty
            spec['price'] = product_price

            product[product_name] = spec

            print(product)

    else:
        for k in product.keys():
            print(f"{k} = Rs. {product[k]['price']}")

    ch = input("do you want to add more products : ")
    if ch == 'no':
        status = False




