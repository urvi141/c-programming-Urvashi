from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def home(request):
    return render(request,"places/index.html")

def about(request):
    return render(request,"places/about.html")

def tajmahal(request):
    return render(request,"places/tajmahal.html")

def dallake(request):
    return render(request,"places/dallake.html")

def munnar(request):
    return render(request,"places/munnar.html")

def falls(request):
    return render(request,"places/falls.html")

def valley(request):
    return render(request,"places/valley.html")


