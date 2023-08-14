var typed = new Typed('#element',{
    strings:['Web Developer','Gamer','Editor'],
    typeSpeed:50,
    loop : true,
})

    // Function to scroll to the top of the page
    function scrollToTop() {
        window.scrollTo({ top: 0, behavior: 'smooth' });
    }

    // Show or hide the back-to-top button based on scroll position
    window.onscroll = function () {
        toggleBackToTopButton();
    };

    // Function to toggle the visibility of the back-to-top button
    function toggleBackToTopButton() {
        var button = document.querySelector('.back-to-top-btn');
        if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) {
            button.style.display = 'block';
        } else {
            button.style.display = 'none';
        }
      }

    // Function to speak the text using the robot voice
    function speakRobotVoice() {
        const text = "Hi, My Name Is Aman and I am a passionate Web Developer, Gamer, Editor";

        // Check if the Web Speech API is supported by the browser
        if ('speechSynthesis' in window) {
            // Get available voices
            const voices = speechSynthesis.getVoices();

            // Find a preferred voice, you can adjust this based on your preference
            const preferredVoice = voices.find(voice => voice.lang === 'en-US');

            // Create a SpeechSynthesisUtterance object
            const msg = new SpeechSynthesisUtterance();
            msg.text = text;
            msg.voice = preferredVoice;

            // Speak the text
            speechSynthesis.speak(msg);
        } else {
            alert("Sorry, your browser doesn't support the Web Speech API. Try using a different browser.");
        }
    }

    // Trigger speech synthesis when the button is clicked
    document.getElementById('hear-robot-voice-btn').addEventListener('click', speakRobotVoice);

