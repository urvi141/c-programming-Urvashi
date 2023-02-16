
from django.shortcuts import render
from django.http import HttpResponse
from django.shortcuts import redirect
from .models import *


# Create your views here.

"""
models.objects.get(fieldname = htmlname) = fetch data from database(model)

"""

def home(request):
    if "email" in request.session:
        uid = User.objects.get(email = request.session['email'])
        if uid.role == "chairman":
            cid = Chairman.objects.get(user_id = uid)
            context = {
                'uid' : uid,
                'cid' : cid,
                }
            return render(request,"chairmanapp/index.html",context)

        else: 
            sid = Societymember.objects.get(user_id = uid)
            context = {
                        'uid' : uid,
                        'sid' : sid,
                    }
            return render(request,"societymemberapp/index.html",context) 
    else:
        return redirect("login")

def login(request):
    if "email" in request.session:
        return redirect('home')
    else:
        if request.POST:
            pemail = request.POST['email']
            ppassword = request.POST['password']
            print("------->email",pemail)
            try:
                uid = User.objects.get(email = pemail)
                if uid.password == ppassword:
                    if uid.role == "chairman":
                        cid = Chairman.objects.get(user_id = uid)

                        print("firstname",cid.firstname)
                        print("SIGN IN BUTTON PRESS-----> ",uid)
                        print(uid.role)
                        print(uid.password)
                        request.session['email'] = uid.email # session store
                        return redirect("home")

                    else:
                        sid = Societymember.objects.get(user_id = uid)
                        print("firstname",sid.firstname)
                        print("SIGN IN BUTTON PRESS-----> ",uid)
                        print(uid.role)
                        print(uid.password)
                        request.session['email'] = uid.email
                        #print("-----> puttting data in session",request.session['email'])
                        # context = {
                        #      'uid' : uid,
                        #      'sid' : sid,
                        # }
                        # return render(request,"societymemberapp/index.html",context)
                        return redirect("home")
                        #print("SOCIETY MEMBER")
                else:
                    context = {
                        'emsg' : "invalid password"
                    }
                print("something went wrong")
                return render(request,"chairmanapp/login.html",context)
            except:
                 context = {
                         'emsg' : "invalid email address"
                 }
                 print("something went wrong")
                 return render(request,"chairmanapp/login.html",context)
        else:
           print("===> login page refresh")
           return render(request,"chairmanapp/login.html")

def logout(request):
    if "email" in request.session:
        del request.session['email']
        return redirect("login")
    else:
        return redirect("login")

def chairman_profile(request):
    if "email" in request.session:
        uid = User.objects.get(email = request.session['email'])
        cid = Chairman.objects.get(user_id = uid)
        if request.POST:
            firstname = request.POST['firstname']
            lastname = request.POST['lastname']

            cid.firstname = firstname
            cid.lastname = lastname

            cid.save()
            
            context = {
                'uid' : uid,
                'cid' : cid,
            }
            return render(request,"chairmanapp/profile.html",context)
        else:
            context = {
                'uid' : uid,
                'cid' : cid,
            }
            return render(request,"chairmanapp/profile.html",context) 
    else:
       return redirect("login") 
def chairman_change_password(request):
    if "email" in request.session:
        uid = User.objects.get(email = request.session['email'])
        cid = Chairman.objects.get(user_id = uid)

        if request.POST:
            currentpassword = request.POST['currentpassword']
            newpassword = request.POST['newpassword']

            if uid.password == currentpassword:
                uid.password = newpassword
                uid.save()
                return redirect("logout")
            else:
                pass
            context = {
                'uid' : uid,
                'cid' : cid,
            }
            return render(request,"chairmanapp/profile.html",context)
        else:
            context = {
                'uid' : uid,
                'cid' : cid,
            }
            return render(request,"chairmanapp/profile.html",context)


        
      
    
  
