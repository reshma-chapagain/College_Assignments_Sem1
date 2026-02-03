function handleRegistration() {
    // Accessing DOM elements [5]
    const age = document.getElementById('age').value;
    const category = document.getElementById('category').value;
    const messageBox = document.getElementById('confirmationMessage');

    // Age validation logic [15]
    if (age < 18) {
        alert("You must be 18 or older to participate."); [13]
        return;
    }

    // Customized message based on category [16]
    let message = "";
    switch(category) {
        case "5K":
            message = "Welcome to the 5K Marathon! Get ready to sprint!";
            break;
        case "10K":
            message = "Welcome to the 10K Marathon! Pace yourself and enjoy the run!";
            break;
        case "Half Marathon":
            message = "Welcome to the Half Marathon! Prepare for an incredible challenge!";
            break;
    }

    // DOM Manipulation to show message [5]
    messageBox.innerHTML = `<h3>${message}</h3>`;
    messageBox.classList.remove('hidden');
}

// Help button logic [17]
function showHelp() {
    alert("Please call +977: 9812345678 for more details.");
}
