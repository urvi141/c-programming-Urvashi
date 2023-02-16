from django.shortcuts import render
from django.http import HttpResponse
from django.shortcuts import redirect
from chairmanapp.models import *

# Create your views here.

def societymember_profile(request):
    if "email" in request.session:
        print("======>>>>>>")
        uid = User.objects.get(email = request.session['email'])
        if uid.role == "societymember": 
            sid = Societymember.objects.get(user_id = uid)
            if request.POST:
                firstname = request.POST['firstname']
                lastname = request.POST['lastname']

                sid.firstname = firstname
                sid.lastname = lastname

                sid.save()
                context = {
                            'uid' : uid,
                            'sid' : sid,
                        }
                return render(request,"societymemberapp/profile.html",context)
            else:
                context = {
                            'uid' : uid,
                            'sid' : sid,
                        }
                return render(request,"societymemberapp/profile.html",context)  
    else:
        return redirect("login")

def societymember_change_password(request):
    if "email" in request.session:
        uid = User.objects.get(email = request.session['email'])
        sid = Societymember.objects.get(user_id = uid)

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
                'sid' : sid,
            }
            return render(request,"societymember/profile.html",context)
        else:
            context = {
                'uid' : uid,
                'sid' : sid,
            }
            return render(request,"societymember/profile.html",context)
