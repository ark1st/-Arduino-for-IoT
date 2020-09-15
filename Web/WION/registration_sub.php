<!DOCTYPE HTML>
<html>
	<head>
		<title>등록 페이지</title>
		<meta charset="utf-8" />
		<meta name="viewport" content="width=device-width, initial-scale=1" />
		<!--[if lte IE 8]><script src="assets/js/ie/html5shiv.js"></script><![endif]-->
		<link rel="stylesheet" href="assets/css/main.css" />
		<link rel="stylesheet" href="assets/css/font-awesome.min.css" />
		<link href="https://fonts.googleapis.com/icon?family=Material+Icons"
      rel="stylesheet">
		<!--[if lte IE 8]><link rel="stylesheet" href="assets/css/ie8.css" /><![endif]-->
		<!--[if lte IE 9]><link rel="stylesheet" href="assets/css/ie9.css" /><![endif]-->
	</head>
	<body class="landing">

		<!-- Header -->
			<header id="header" class="alt">
				<h1><a href="index.php">대학선교국</a></h1>
				<a href="#nav">메뉴</a>
			</header>

		<!-- Nav -->
			<nav id="nav">
				<ul class="links">
					<li><a href="index.php">홈</a></li>
					<li><a href="registration.php">등록</a></li>
					<li><a href="contact.php">소개 및 연락처</a></li>
				</ul>
			</nav>

			<section id="banner2">
				<i class="material-icons md-60 md-light">assignment</i>
				<h2>등록</h2>
				<p>"...주는 그리스도시요 살아 계신 하나님의 아들이시나이다."<br>- 마태복음 16:16</p>
			</section>

		<!-- 등록 -->
		<!-- 대학검색 api?
				훈련에따른 비용보여주기: javascript? -->
			<section id="four" class="wrapper style2 special">
				<div class="inner">

					<div class="table-wrapper">
						<table class="alt">
							<thead>
								<tr>
									<th>훈련명</th>
									<th class="align-center">설명</th>
									<th>훈련비용</th>
								</tr>
							</thead>
							<tbody>
								<tr>
									<td>세계대학 수련회</td>
									<td>매해열리는 세계 최고의 대학 훈련</td>
									<td>3,000만원</td>
								</tr>
								<tr>
									<td>배고프다</td>
									<td>또무슨 훈련이 있지?</td>
									<td>1억</td>
								</tr>
								<tr>
									<td>훈련3</td>
									<td> 세번째 훈련</td>
									<td>3원</td>
								</tr>
								<tr>
									<td>훈련4</td>
									<td>4번째 훈련</td>
									<td>무료</td>
								</tr>
							</tbody>
						</table>
					</div>
					<hr>
					<h4>등록정보 입력</h4>
					<form action="#" method="POST">
						<div class="container 75%">
							<div class="row uniform 50%">
								<div class="6u 12u$(xsmall)">
									<input name="name" placeholder="이름" type="text" />
								</div>
								<div class="6u$ 12u$(xsmall)">
									<input name="email" placeholder="이메일" type="email" />
								</div>
								<div class="12u$">
									<textarea name="message" placeholder="건의사항" rows="4"></textarea>
								</div>
								<div class="4u 12u$(xsmall)">
	                  <input type="radio" id="1학년" name="choice">
	                  <label for="1학년">1학년</label>
	               </div>
	               <div class="4u 12u$(xsmall)">
	                  <input type="radio" id="2학년" name="choice">
	                  <label for="2학년">2학년</label>
	               </div>
	               <div class="4u$ 12u$(xsmall)">
	                  <input type="radio" id="3학년" name="choice">
	                  <label for="3학년">3학년</label>
								</div>
								<div class="4u$ 12u$(xsmall)">
									 <input type="radio" id="4학년" name="choice">
									 <label for="4학년">4학년</label>
							 </div>
							</div>
							<br>
							<div class="12u$">
								<div class="select-wrapper">
									<select name="category" id="category">
										<option value="">- 훈련목록 -</option>
										<option value="1">대학수련회</option>
										<option value="2">훈련2</option>
										<option value="3">훈련3</option>
										<option value="4">훈련4</option>
									</select>
								</div>
							</div>
							</div>
						</div>
					</div>
						<ul class="actions">
							<li><input type="submit" class="special" value="등록" /></li>
							<li><input type="reset" class="alt" value="모두 삭제" /></li>
						</ul>
					</form>
				</div>
			</section>

		<!-- Footer -->
			<footer id="footer">
				<div class="inner">
					<ul class="icons">
						<li><a href="#" class="icon fa-facebook">
							<span class="label">Facebook</span>
						</a></li>
						<li><a href="#" class="icon fa-twitter">
							<span class="label">Twitter</span>
						</a></li>
						<li><a href="#" class="icon fa-instagram">
							<span class="label">Instagram</span>
						</a></li>
						<li><a href="#" class="icon fa-linkedin">
							<span class="label">LinkedIn</span>
						</a></li>
					</ul>
					<ul class="copyright">
						<li>&copy; Untitled.</li>
						<li>Images: <a href="http://unsplash.com">Unsplash</a>.</li>
						<li>Design: <a href="http://templated.co">TEMPLATED</a>.</li>
					</ul>
				</div>
			</footer>
      <!-- Scripts -->
        <script src="assets/js/jquery.min.js"></script>
        <script src="assets/js/skel.min.js"></script>
        <script src="assets/js/util.js"></script>
        <!--[if lte IE 8]><script src="assets/js/ie/respond.min.js"></script><![endif]-->
        <script src="assets/js/main.js"></script>
	</body>
</html>
