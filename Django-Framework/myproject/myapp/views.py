from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    return render(request,"myapp/index.html")

def about(request):
    return render(request,"myapp/about.html")

def pytho(request):
    return render(request,"myapp/python.html")

def java(request):
    return render(request,"myapp/java.html")

def android(request):
    return render(request,"myapp/android.html")

def dart(request):
    return render(request,"myapp/dart.html")

def Cpp(request):
    return render(request,"myapp/cpp.html")
