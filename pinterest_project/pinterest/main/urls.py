from django.urls import path
from . import views

urlpatterns = [
    path('home/', views.home),
    path('notifications/', views.notifications),
    path('messages/', views.messages_page),
    path('profile/', views.profile),
]
