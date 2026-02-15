from django.shortcuts import render
from django.contrib.auth.decorators import login_required
# Create your views here.

@login_required
def home(request):
    return render(request, 'home.html')

@login_required
def notifications(request):
    return render(request, 'notifications.html')

@login_required
def messages_page(request):
    return render(request, 'messages.html')

@login_required
def profile(request):
    return render(request, 'profile.html')
