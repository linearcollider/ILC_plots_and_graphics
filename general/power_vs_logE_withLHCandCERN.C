void power_vs_logE()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Jan 23 16:20:42 2023) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-1.575113,-152.5641,0.8967163,744.8718);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.17);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx9[4] = {
   0.0912,
   0.161,
   0.24,
   0.365};
   Double_t Graph0_fy9[4] = {
   259,
   277,
   282,
   354};
   TGraph *graph = new TGraph(4,Graph0_fx9,Graph0_fy9);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph09 = new TH1F("Graph_Graph09","",100,0.07,5);
   Graph_Graph09->SetMinimum(0);
   Graph_Graph09->SetMaximum(700);
   Graph_Graph09->SetDirectory(0);
   Graph_Graph09->SetStats(0);
   Graph_Graph09->SetLineWidth(2);
   Graph_Graph09->SetMarkerStyle(20);
   Graph_Graph09->SetMarkerSize(0.7);
   Graph_Graph09->GetXaxis()->SetTitle("Center-of-Mass Energy [TeV]");
   Graph_Graph09->GetXaxis()->SetRange(1,100);
   Graph_Graph09->GetXaxis()->SetNdivisions(506);
   Graph_Graph09->GetXaxis()->SetLabelFont(42);
   Graph_Graph09->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph09->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph09->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph09->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph09->GetXaxis()->SetTitleFont(42);
   Graph_Graph09->GetYaxis()->SetTitle("Total AC Power [MW]");
   Graph_Graph09->GetYaxis()->SetNdivisions(506);
   Graph_Graph09->GetYaxis()->SetLabelFont(42);
   Graph_Graph09->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph09->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph09->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph09->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph09->GetYaxis()->SetTitleFont(42);
   Graph_Graph09->GetZaxis()->SetLabelFont(42);
   Graph_Graph09->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph09->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph09->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph09->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph09->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph09);
   
   graph->Draw("alp");
   
   Double_t Graph1_fx10[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph1_fy10[4] = {
   300,
   300,
   300,
   300};
   graph = new TGraph(4,Graph1_fx10,Graph1_fy10);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","Graph",100,0.06432,0.38688);
   Graph_Graph110->SetMinimum(299.9);
   Graph_Graph110->SetMaximum(301.1);
   Graph_Graph110->SetDirectory(0);
   Graph_Graph110->SetStats(0);
   Graph_Graph110->SetLineWidth(2);
   Graph_Graph110->SetMarkerStyle(20);
   Graph_Graph110->SetMarkerSize(0.7);
   Graph_Graph110->GetXaxis()->SetNdivisions(506);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph110->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph110->GetXaxis()->SetTitleOffset(1);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetNdivisions(506);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph110->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph110->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph110->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
   graph->Draw("lp");
   
   Double_t Graph2_fx11[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph2_fy11[4] = {
   350,
   350,
   350,
   350};
   graph = new TGraph(4,Graph2_fx11,Graph2_fy11);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph211 = new TH1F("Graph_Graph211","Graph",100,0.06432,0.38688);
   Graph_Graph211->SetMinimum(349.9);
   Graph_Graph211->SetMaximum(351.1);
   Graph_Graph211->SetDirectory(0);
   Graph_Graph211->SetStats(0);
   Graph_Graph211->SetLineWidth(2);
   Graph_Graph211->SetMarkerStyle(20);
   Graph_Graph211->SetMarkerSize(0.7);
   Graph_Graph211->GetXaxis()->SetNdivisions(506);
   Graph_Graph211->GetXaxis()->SetLabelFont(42);
   Graph_Graph211->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph211->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph211->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph211->GetXaxis()->SetTitleOffset(1);
   Graph_Graph211->GetXaxis()->SetTitleFont(42);
   Graph_Graph211->GetYaxis()->SetNdivisions(506);
   Graph_Graph211->GetYaxis()->SetLabelFont(42);
   Graph_Graph211->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph211->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph211->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph211->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph211->GetYaxis()->SetTitleFont(42);
   Graph_Graph211->GetZaxis()->SetLabelFont(42);
   Graph_Graph211->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph211->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph211->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph211->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph211);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx12[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph3_fy12[4] = {
   100,
   110,
   364,
   589};
   graph = new TGraph(4,Graph3_fx12,Graph3_fy12);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph312 = new TH1F("Graph_Graph312","Graph",100,0.08208,3.29088);
   Graph_Graph312->SetMinimum(51.1);
   Graph_Graph312->SetMaximum(637.9);
   Graph_Graph312->SetDirectory(0);
   Graph_Graph312->SetStats(0);
   Graph_Graph312->SetLineWidth(2);
   Graph_Graph312->SetMarkerStyle(20);
   Graph_Graph312->SetMarkerSize(0.7);
   Graph_Graph312->GetXaxis()->SetNdivisions(506);
   Graph_Graph312->GetXaxis()->SetLabelFont(42);
   Graph_Graph312->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph312->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph312->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph312->GetXaxis()->SetTitleOffset(1);
   Graph_Graph312->GetXaxis()->SetTitleFont(42);
   Graph_Graph312->GetYaxis()->SetNdivisions(506);
   Graph_Graph312->GetYaxis()->SetLabelFont(42);
   Graph_Graph312->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph312->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph312->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph312->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph312->GetYaxis()->SetTitleFont(42);
   Graph_Graph312->GetZaxis()->SetLabelFont(42);
   Graph_Graph312->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph312->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph312->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph312->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph312->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph312);
   
   graph->Draw("lp");
   
   Double_t Graph4_fx13[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph4_fy13[4] = {
   100,
   170,
   364,
   589};
   graph = new TGraph(4,Graph4_fx13,Graph4_fy13);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph413 = new TH1F("Graph_Graph413","Graph",100,0.08208,3.29088);
   Graph_Graph413->SetMinimum(51.1);
   Graph_Graph413->SetMaximum(637.9);
   Graph_Graph413->SetDirectory(0);
   Graph_Graph413->SetStats(0);
   Graph_Graph413->SetLineWidth(2);
   Graph_Graph413->SetMarkerStyle(20);
   Graph_Graph413->SetMarkerSize(0.7);
   Graph_Graph413->GetXaxis()->SetNdivisions(506);
   Graph_Graph413->GetXaxis()->SetLabelFont(42);
   Graph_Graph413->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph413->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph413->GetXaxis()->SetTitleOffset(1);
   Graph_Graph413->GetXaxis()->SetTitleFont(42);
   Graph_Graph413->GetYaxis()->SetNdivisions(506);
   Graph_Graph413->GetYaxis()->SetLabelFont(42);
   Graph_Graph413->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph413->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph413->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph413->GetYaxis()->SetTitleFont(42);
   Graph_Graph413->GetZaxis()->SetLabelFont(42);
   Graph_Graph413->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph413->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph413->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph413->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph413);
   
   graph->Draw("lp");
   
   Double_t Graph5_fx14[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph5_fy14[4] = {
   94,
   111,
   173,
   300};
   graph = new TGraph(4,Graph5_fx14,Graph5_fy14);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph514 = new TH1F("Graph_Graph514","Graph",100,0.00032,1.09088);
   Graph_Graph514->SetMinimum(73.4);
   Graph_Graph514->SetMaximum(320.6);
   Graph_Graph514->SetDirectory(0);
   Graph_Graph514->SetStats(0);
   Graph_Graph514->SetLineWidth(2);
   Graph_Graph514->SetMarkerStyle(20);
   Graph_Graph514->SetMarkerSize(0.7);
   Graph_Graph514->GetXaxis()->SetNdivisions(506);
   Graph_Graph514->GetXaxis()->SetLabelFont(42);
   Graph_Graph514->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph514->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph514->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph514->GetXaxis()->SetTitleOffset(1);
   Graph_Graph514->GetXaxis()->SetTitleFont(42);
   Graph_Graph514->GetYaxis()->SetNdivisions(506);
   Graph_Graph514->GetYaxis()->SetLabelFont(42);
   Graph_Graph514->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph514->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph514->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph514->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph514->GetYaxis()->SetTitleFont(42);
   Graph_Graph514->GetZaxis()->SetLabelFont(42);
   Graph_Graph514->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph514->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph514->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph514->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph514->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph514);
   
   graph->Draw("lp");
   
   Double_t Graph6_fx15[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph6_fy15[4] = {
   115,
   138,
   215,
   300};
   graph = new TGraph(4,Graph6_fx15,Graph6_fy15);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph615 = new TH1F("Graph_Graph615","Graph",100,0.00032,1.09088);
   Graph_Graph615->SetMinimum(96.5);
   Graph_Graph615->SetMaximum(318.5);
   Graph_Graph615->SetDirectory(0);
   Graph_Graph615->SetStats(0);
   Graph_Graph615->SetLineWidth(2);
   Graph_Graph615->SetMarkerStyle(20);
   Graph_Graph615->SetMarkerSize(0.7);
   Graph_Graph615->GetXaxis()->SetNdivisions(506);
   Graph_Graph615->GetXaxis()->SetLabelFont(42);
   Graph_Graph615->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph615->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph615->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph615->GetXaxis()->SetTitleOffset(1);
   Graph_Graph615->GetXaxis()->SetTitleFont(42);
   Graph_Graph615->GetYaxis()->SetNdivisions(506);
   Graph_Graph615->GetYaxis()->SetLabelFont(42);
   Graph_Graph615->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph615->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph615->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph615->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph615->GetYaxis()->SetTitleFont(42);
   Graph_Graph615->GetZaxis()->SetLabelFont(42);
   Graph_Graph615->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph615->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph615->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph615->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph615->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph615);
   
   graph->Draw("lp");
   
   Double_t Graph7_fx16[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph7_fy16[4] = {
   115,
   198,
   215,
   300};
   graph = new TGraph(4,Graph7_fx16,Graph7_fy16);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(3);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph716 = new TH1F("Graph_Graph716","Graph",100,0.00032,1.09088);
   Graph_Graph716->SetMinimum(96.5);
   Graph_Graph716->SetMaximum(318.5);
   Graph_Graph716->SetDirectory(0);
   Graph_Graph716->SetStats(0);
   Graph_Graph716->SetLineWidth(2);
   Graph_Graph716->SetMarkerStyle(20);
   Graph_Graph716->SetMarkerSize(0.7);
   Graph_Graph716->GetXaxis()->SetNdivisions(506);
   Graph_Graph716->GetXaxis()->SetLabelFont(42);
   Graph_Graph716->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph716->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph716->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph716->GetXaxis()->SetTitleOffset(1);
   Graph_Graph716->GetXaxis()->SetTitleFont(42);
   Graph_Graph716->GetYaxis()->SetNdivisions(506);
   Graph_Graph716->GetYaxis()->SetLabelFont(42);
   Graph_Graph716->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph716->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph716->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph716->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph716->GetYaxis()->SetTitleFont(42);
   Graph_Graph716->GetZaxis()->SetLabelFont(42);
   Graph_Graph716->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph716->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph716->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph716->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph716->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph716);
   
   graph->Draw("lp");
   TLine *line = new TLine(0.07,200,5,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   line->SetLineColor(ci);
   line->SetLineStyle(9);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(0.07,130,5,130);

   ci = TColor::GetColor("#ff9900");
   line->SetLineColor(ci);
   line->SetLineStyle(9);
   line->SetLineWidth(3);
   line->Draw();
   TText *text = new TText(1,209,"CERN total 2022");

   ci = TColor::GetColor("#ff9900");
   text->SetTextColor(ci);
   text->SetTextFont(42);
   text->Draw();
   text = new TText(0.8,90,"LHC power 2022");

   ci = TColor::GetColor("#ff9900");
   text->SetTextColor(ci);
   text->SetTextFont(42);
   text->Draw();
   
   TLegend *leg = new TLegend(0.21,0.65,0.61,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","AC Power vs Energy of Future e^{+}e^{-} Colliders","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","FCCee, 2 IPs [arXiv:2203.08310] ","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CEPC, 2 IPs [arXiv:2203.09451]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","CEPC, 2 IPs, lumi up, power priv. com.]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph5","ILC baseline [arXiv:2203.07622]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph6","ILC luminosity upgrade [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph7","ILC250 10 Hz operation [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(3);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","CLIC baseline [arXiv:2203.09186]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","CLIC luminosity upgrade [dito]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
