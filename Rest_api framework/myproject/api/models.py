from django.db import models

# Create your models here.

class Student(models.Model):
    name = models.CharField(max_length=30)
    email = models.EmailField(max_length=30)
    subject = models.CharField(max_length=30)
    city = models.CharField(max_length=30)
    password = models.CharField(max_length=30)
